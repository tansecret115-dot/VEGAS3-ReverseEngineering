/* Module: rmbe3260.dll
   Function: FUN_660108d0
   Address: 660108d0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_660108d0(void *param_1,int param_2,int *param_3,int *param_4,undefined4 *param_5)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  
  bVar1 = false;
  uVar4 = 0;
  if (*(uint *)((int)param_1 + 0x100) != 0) {
    piVar2 = (int *)((int)param_1 + 0x14);
    do {
      if ((param_2 == piVar2[-1]) && (param_3 == (int *)*piVar2)) {
        bVar1 = true;
        goto LAB_6601090f;
      }
      uVar4 = uVar4 + 1;
      piVar2 = piVar2 + 2;
    } while (uVar4 < *(uint *)((int)param_1 + 0x100));
    bVar1 = false;
  }
LAB_6601090f:
  if (!bVar1) {
    return 0x80040252;
  }
  iVar3 = FUN_66010960(param_1,param_2,param_3,param_4);
  if (iVar3 != 0) {
    FUN_66010960(param_1,*param_4,(int *)param_4[1],param_5);
  }
  return 0;
}


