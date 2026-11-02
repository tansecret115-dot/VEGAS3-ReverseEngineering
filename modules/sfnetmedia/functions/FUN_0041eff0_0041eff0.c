/* Module: sfnetmedia.dll
   Function: FUN_0041eff0
   Address: 0041eff0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0041eff0(HWND param_1,undefined4 param_2,int param_3)

{
  BYTE *pBVar1;
  int iVar2;
  uint *puVar3;
  undefined8 uVar4;
  uint uVar5;
  uchar local_48 [32];
  uint local_28 [10];
  
  if (*(double *)(*(int *)(param_3 + 0x10) + 0x10) != _DAT_00435fc0) {
    local_48[0] = '\0';
    puVar3 = local_28;
    for (iVar2 = 10; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    }
    local_28[0] = 1;
    uVar5 = 2;
    uVar4 = ftol();
    FUN_004226f0(local_48,local_28,(uint)uVar4,(int)((ulonglong)uVar4 >> 0x20),uVar5);
    pBVar1 = FUN_00419120(DAT_00441d60,0x1128);
    FUN_00417320(param_1,pBVar1);
    pBVar1 = FUN_00419120(DAT_00441d60,0x1129);
    FUN_00417320(param_1,pBVar1);
    FUN_00417320(param_1,"\t\t%s");
    return 1;
  }
  pBVar1 = FUN_00419120(DAT_00441d60,0x112a);
  FUN_00417320(param_1,pBVar1);
  return 1;
}


