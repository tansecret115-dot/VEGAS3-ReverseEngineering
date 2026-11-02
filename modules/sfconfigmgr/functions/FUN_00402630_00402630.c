/* Module: sfconfigmgr.dll
   Function: FUN_00402630
   Address: 00402630
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00402630(undefined4 *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  int *unaff_retaddr;
  uint uStack_3cc;
  undefined4 local_3c8;
  int *apiStack_3c4 [2];
  int *piStack_3bc;
  undefined1 auStack_3b8 [88];
  undefined4 auStack_360 [128];
  uint uStack_160;
  uint uStack_154;
  
  uVar3 = 0;
  local_3c8 = 0;
  iVar1 = GetNumberOfInterfaces(&local_3c8);
  if ((iVar1 == 0) && (uVar2 = 0, uStack_3cc != 0)) {
    do {
      puVar4 = auStack_360;
      for (iVar1 = 0xd7; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar4 = 0;
        puVar4 = puVar4 + 1;
      }
      uStack_160 = uVar2;
      iVar1 = GetIfEntry(auStack_360);
      if ((iVar1 == 0) && (uVar3 < uStack_154)) {
        uVar3 = uStack_154;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < uStack_3cc);
  }
  if ((wchar_t *)(uVar3 / 1000) == (wchar_t *)0x0) {
    iVar1 = -0x7fffbffb;
  }
  else {
    iVar1 = FUN_0040aa50((int)unaff_retaddr,param_1,L"connectionspeed",
                         (undefined4 *)&stack0xfffffc30);
    if (-1 < iVar1) {
      swprintf((wchar_t *)apiStack_3c4,0x41a45c,(wchar_t *)(uVar3 / 1000));
      piStack_3bc = (int *)0x0;
      iVar1 = FUN_0040abb0(unaff_retaddr,apiStack_3c4[0],auStack_3b8,&piStack_3bc);
      if (-1 < iVar1) {
        (**(code **)(*piStack_3bc + 8))(piStack_3bc);
        piStack_3bc = (int *)0x0;
      }
      (**(code **)(*apiStack_3c4[0] + 8))(apiStack_3c4[0]);
      return iVar1;
    }
  }
  return iVar1;
}


