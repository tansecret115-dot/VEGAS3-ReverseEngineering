/* Module: vidcap30.exe
   Function: FUN_0048fec0
   Address: 0048fec0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0048fec0(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int *param_5,
                undefined4 param_6,int *param_7)

{
  int iVar1;
  undefined4 *unaff_EBX;
  int iVar2;
  undefined4 unaff_EDI;
  undefined4 uStack_1c;
  int *piStack_18;
  undefined4 uStack_14;
  
  uStack_14 = param_2;
  iVar2 = -0x7ffb1fea;
  piStack_18 = (int *)0x48fee5;
  iVar1 = FUN_00488a00();
  if (-1 < iVar1) {
    uStack_14 = 0;
    piStack_18 = param_7;
    uStack_1c = param_6;
    iVar1 = (**(code **)(iRam00000000 + 0x2c))();
    if (-1 < iVar1) {
      iVar1 = (**(code **)*piStack_18)(piStack_18,&DAT_00586080,&stack0xfffffff4);
      if (-1 < iVar1) {
        (**(code **)(*piStack_18 + 0xc))(piStack_18,param_1[0x96]);
        (**(code **)(*param_5 + 8))(param_5);
      }
      iVar2 = (**(code **)(iRam00000000 + 0x34))(0,&uStack_1c,param_5,unaff_EDI,1);
      if (-1 < iVar2) {
        *unaff_EBX = unaff_EDI;
        (**(code **)(*param_1 + 0x44))(param_1,piStack_18);
      }
    }
    (**(code **)(*piStack_18 + 8))(piStack_18);
    return iVar2;
  }
  return -0x7ffb1fea;
}


