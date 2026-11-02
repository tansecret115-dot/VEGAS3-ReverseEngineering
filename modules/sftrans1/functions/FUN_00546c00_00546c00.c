/* Module: sftrans1.dll
   Function: FUN_00546c00
   Address: 00546c00
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_00546c00(int *param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  
  param_1[1] = param_3;
  param_1[2] = param_2;
  FUN_00545bc0();
  FUN_005455a0(&param_2,0x104,"%s %s","Sonic Foundry",*(undefined4 *)(param_1[1] + 4));
  FUN_00546b00(1,&param_2);
  FUN_00546b00(2,&param_2);
  FUN_00545f80(*(undefined4 *)(param_1[1] + 4));
  FUN_00546b00(0,&param_2);
  uVar1 = (**(code **)(*param_1 + 0x14))();
  FUN_00545d80();
  return uVar1;
}


