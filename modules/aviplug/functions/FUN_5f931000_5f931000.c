/* Module: aviplug.dll
   Function: FUN_5f931000
   Address: 5f931000
   Source: Ghidra pseudocode (Stage 10 batch) */


bool FUN_5f931000(HMODULE param_1)

{
  bool bVar1;
  int3 extraout_var;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  uchar local_104;
  undefined4 local_103;
  
  puVar4 = &DAT_5f9f40f0;
  for (iVar2 = 0x13; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  DAT_5f9f40f0 = param_1;
  bVar1 = FUN_5f982cb0(param_1);
  iVar2 = CONCAT31(extraout_var,bVar1);
  if (-1 < extraout_var) {
    iVar2 = FUN_5f981510(&DAT_5f9f40fc,param_1,0,0);
    if (-1 < iVar2) {
      FUN_5f980270();
      iVar2 = FUN_5f9797b0(&DAT_5f9f4110,4,-1,-1,0x40000000);
      if (-1 < iVar2) {
        DAT_5f9f410c = CreateMutexA((LPSECURITY_ATTRIBUTES)0x0,0,(LPCSTR)0x0);
        if (DAT_5f9f410c == (HANDLE)0x0) {
          iVar2 = -0x7ff8fff2;
        }
        else {
          iVar2 = FUN_5f95aa70(&DAT_5f9f4130);
          if (-1 < iVar2) {
            local_104 = '\0';
            puVar4 = &local_103;
            for (iVar3 = 0x40; iVar3 != 0; iVar3 = iVar3 + -1) {
              *puVar4 = 0;
              puVar4 = puVar4 + 1;
            }
            *(undefined2 *)puVar4 = 0;
            *(undefined1 *)((int)puVar4 + 2) = 0;
            FUN_5f9778d0(0,param_1,&local_104,0x104);
            FUN_5f977910(0,(LPCSTR)&local_104);
            return -1 < iVar2;
          }
        }
      }
    }
  }
  return -1 < iVar2;
}


