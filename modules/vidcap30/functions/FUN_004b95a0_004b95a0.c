/* Module: vidcap30.exe
   Function: FUN_004b95a0
   Address: 004b95a0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_004b95a0(int *param_1)

{
  int iVar1;
  int unaff_EBP;
  short unaff_SI;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int *piStack_220;
  int local_210 [123];
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  iVar1 = 0;
  if (param_1 != (int *)0x0) {
    piStack_220 = local_210;
    local_210[0] = 0;
    iVar1 = (**(code **)(*param_1 + 0xc))();
    if ((-1 < iVar1) && (unaff_EBP != 0)) {
      piVar4 = param_1;
      iVar1 = (**(code **)(*param_1 + 0x34))(param_1,local_210,0x104);
      if ((-1 < iVar1) && (unaff_SI != 0)) {
        piStack_220 = (int *)0x0;
        iVar1 = (**(code **)(*param_1 + 0x24))(param_1,&piStack_220);
        if ((-1 < iVar1) && (piStack_220 != (int *)0x0)) {
          piVar2 = (int *)&stack0xfffffde4;
          iVar3 = 0;
          iVar1 = (**(code **)(*piStack_220 + 0x34))(piStack_220,&stack0xfffffdd8,piVar2,0,0);
          if ((-1 < iVar1) && (iVar3 != 0)) {
            iVar3 = (**(code **)(*param_1 + 0x28))(param_1);
            if (iVar3 == 0) {
              (**(code **)(*param_1 + 0x24))(param_1);
            }
            iVar1 = FUN_004b9550(piVar2,uStack_24,uStack_20);
            if (iVar3 == 0) {
              (**(code **)(*param_1 + 0x2c))(param_1,0,1);
            }
            (**(code **)(*piVar2 + 8))(piVar2);
          }
          (**(code **)(*piVar4 + 8))(piVar4);
        }
      }
      (**(code **)(*param_1 + 8))(param_1);
    }
  }
  return iVar1;
}


