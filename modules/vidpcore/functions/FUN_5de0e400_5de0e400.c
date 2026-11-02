/* Module: vidpcore.dll
   Function: FUN_5de0e400
   Address: 5de0e400
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5de0e400(undefined4 param_1,undefined4 param_2,int *param_3)

{
  int *unaff_retaddr;
  undefined4 ***pppuVar1;
  undefined4 *puVar2;
  int iVar3;
  double dStack_38;
  undefined1 auStack_34 [4];
  undefined4 **local_30 [2];
  double dStack_28;
  int *piStack_18;
  uint uStack_14;
  double dStack_c;
  undefined4 uStack_4;
  
  iVar3 = 0x10;
  dStack_38 = (double)ZEXT48(auStack_34);
  (**(code **)(*param_3 + 0xc))(param_3,local_30,0x10,auStack_34);
  if (param_3 < &DAT_00000010) {
    dStack_38 = (double)iVar3;
  }
  puVar2 = &uStack_4;
  pppuVar1 = local_30;
  uStack_4 = 0;
  (**(code **)(*unaff_retaddr + 0xc))(unaff_retaddr,pppuVar1,0x10,puVar2);
  if (uStack_14 < 0x10) {
    dStack_38 = (double)iVar3;
  }
  dStack_28 = (dStack_38 - (double)CONCAT44(param_3,puVar2)) * dStack_c +
              (double)CONCAT44(param_3,puVar2);
  local_30[0] = pppuVar1;
  (**(code **)(*piStack_18 + 0x10))(piStack_18,local_30,0x10,0);
  return;
}


