/* Module: encn3260.dll
   Function: FUN_6649d790
   Address: 6649d790
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_6649d790(UINT_PTR *param_1)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  UINT_PTR *local_8;
  
  bVar1 = (byte)param_1[3];
  *(byte *)(param_1 + 3) = bVar1 | 2;
  if ((bVar1 & 1) == 0) {
    return 0;
  }
  *(byte *)(param_1 + 3) = bVar1 & 0xfe | 2;
  if ((bVar1 & 4) == 0) {
    local_8 = param_1;
    KillTimer((HWND)0x0,*param_1);
    local_8 = (UINT_PTR *)0x0;
    iVar3 = FUN_664bbdc0(&DAT_664f0618,*param_1,&local_8);
    if ((iVar3 == 0) || (local_8[1] != *param_1)) goto LAB_6649d890;
    FUN_664bbe60(&DAT_664f0618,*param_1);
  }
  else {
    bVar2 = false;
    local_8 = (UINT_PTR *)0x0;
    if (*param_1 != 0) {
      KillTimer((HWND)0x0,*param_1);
      iVar3 = FUN_664bbdc0(&DAT_664f0618,*param_1,&local_8);
      if (iVar3 != 0) {
        FUN_664bbe60(&DAT_664f0618,*param_1);
        operator_delete(local_8);
        local_8 = (UINT_PTR *)0x0;
        bVar2 = true;
      }
    }
    if (param_1[1] == 0) goto LAB_6649d890;
    KillTimer((HWND)0x0,param_1[1]);
    iVar3 = FUN_664bbdc0(&DAT_664f0618,param_1[1],&local_8);
    if ((iVar3 == 0) || (FUN_664bbe60(&DAT_664f0618,param_1[1]), bVar2)) goto LAB_6649d890;
  }
  operator_delete(local_8);
LAB_6649d890:
  *param_1 = 0;
  param_1[1] = 0;
  return 0;
}


