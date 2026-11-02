/* Module: wmfplug2.dll
   Function: FUN_00445120
   Address: 00445120
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00445120(int *param_1,int param_2,undefined4 param_3,undefined4 param_4,int *param_5,
                undefined4 param_6,int *param_7)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  undefined4 *unaff_EBX;
  int iVar4;
  undefined4 unaff_EDI;
  undefined4 uStack_1c;
  int *piStack_18;
  int *local_4;
  
  iVar4 = -0x7ffb1fea;
  local_4 = (int *)0x0;
  piStack_18 = (int *)0x445145;
  piVar2 = FUN_0043dc60(param_1,param_2,&local_4);
  piVar1 = local_4;
  if (-1 < (int)piVar2) {
    piStack_18 = param_7;
    uStack_1c = param_6;
    iVar3 = (**(code **)(*local_4 + 0x2c))();
    if (-1 < iVar3) {
      iVar4 = (**(code **)*piStack_18)(piStack_18,&DAT_0047ac50,&stack0xfffffff4);
      if (-1 < iVar4) {
        (**(code **)(*piStack_18 + 0xc))(piStack_18,param_1[0x96]);
        (**(code **)(*param_5 + 8))(param_5);
      }
      iVar4 = (**(code **)(*piVar1 + 0x34))(piVar1,&uStack_1c,param_5,unaff_EDI,1);
      if (-1 < iVar4) {
        *unaff_EBX = unaff_EDI;
        (**(code **)(*param_1 + 0x44))(param_1,piStack_18);
      }
    }
    (**(code **)(*piStack_18 + 8))(piStack_18);
    return iVar4;
  }
  return -0x7ffb1fea;
}


