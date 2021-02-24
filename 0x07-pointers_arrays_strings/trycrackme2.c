#include <stdio.h>
#include <stdint.h>

undefined8 main(uint32_t argc, char **argv, char **envp)
{
	int32_t iVar1;
	undefined8 uVar2;
	int64_t iVar3;
	int64_t in_FS_OFFSET;
	char **s1;
	char **var_c0h;
	uint32_t var_b4h;
	int32_t var_ach;
	char *s;
	int64_t var_a0h;
	int64_t var_40h;
	char *s2;
	int64_t var_28h;
	int64_t var_20h;
	int64_t var_18h;
	int64_t var_10h;
	int64_t canary;

	canary = *(int64_t *)(in_FS_OFFSET + 0x28);
	s2 = (char *)0x0;
	var_28h = 0;
	var_20h = 0;
	var_18h = 0;
	var_10h._0_1_ = 0;
	s = (char *)0x0;
	s1 = envp;
	if (argc == 1) {
		while (*s1 != (char *)0x0) {
			iVar1 = strncmp(*s1, "jennieandjayloveasm=", 0x14);
			if (iVar1 == 0) {
				s = *s1;
				break;
			}
			s1 = s1 + 1;
		}
		if (s == (char *)0x0) {
			puts("Access Denied");
			uVar2 = 1;
		} else {
			s = s + 0x14;
			MD5_Init(&var_a0h);
			uVar2 = strlen(s);
			MD5_Update(&var_a0h, s, uVar2, s);
			MD5_Final(&var_40h, &var_a0h, &var_a0h);
			var_ach = 0;
			while (var_ach < 0x10) {
				iVar3 = (int64_t)&s2 + (int64_t)(var_ach * 2);
				sprintf(iVar3, "%02x", *(undefined *)((int64_t)&var_40h + (int64_t)var_ach), iVar3);
				var_ach = var_ach + 1;
			}
			var_10h._0_1_ = 0;
			iVar1 = strcmp("e99a18c428cb38d5f260853678922e03", &s2);
			if (iVar1 == 0) {
				puts("Access Granted");
				uVar2 = 0;
			} else {
				puts("Access Denied");
				uVar2 = 1;
			}
		}
	} else {
		puts("Access Denied");
		uVar2 = 1;
	}
	if (canary != *(int64_t *)(in_FS_OFFSET + 0x28)) {
		uVar2 = __stack_chk_fail();
	}
	return uVar2;
}
