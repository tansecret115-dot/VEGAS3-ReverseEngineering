/* Module: encn3260.dll
   Function: FUN_664b93d0
   Address: 664b93d0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl FUN_664b93d0(char *param_1)

{
  int iVar1;
  FILE *_File;
  size_t sVar2;
  undefined4 uVar3;
  undefined1 local_28 [28];
  int local_c;
  
  uVar3 = 0;
  if ((param_1 != (char *)0x0) && (*param_1 != '\0')) {
    iVar1 = stat(param_1,local_28);
    if ((iVar1 == 0) && ((DAT_664f28a8 == 0 || (local_c != DAT_664f26a0)))) {
      DAT_664f26a0 = local_c;
      _File = fopen(param_1,&DAT_664ef0f4);
      if (_File != (FILE *)0x0) {
        sVar2 = fread(s_DDPDB_664e3b28,1,0xb410,_File);
        if (sVar2 != 0) {
          iVar1 = strncmp(s_DDPDB_664e3b28,s_DDPDB_664ef0ec,5);
          if ((((iVar1 == 0) && (0xff < DAT_664e3b30)) && (DAT_664e3b34 != 0)) &&
             ((DAT_664e3b34 < 0x100 && (DAT_664e3b34 * 0xb4 + 0x10 == sVar2)))) {
            DAT_664f28ac = 1;
            DAT_664f28a8 = DAT_664f28a8 + 1;
            uVar3 = 1;
          }
        }
        fclose(_File);
      }
    }
  }
  return uVar3;
}


