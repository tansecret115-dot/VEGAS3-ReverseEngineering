/* Module: vegas30k.dll
   Function: FUN_01025a30
   Address: 01025a30
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_01025a30(undefined4 *param_1,uint param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  undefined4 uStack_18;
  undefined4 local_14 [4];
  
  piVar2 = (int *)&DAT_011e68f8;
  local_14[0] = 0;
  iVar1 = (**(code **)*param_1)(param_1,&DAT_011e68f8,local_14);
  if (-1 < iVar1) {
    switch(param_2 & 0xf) {
    case 1:
      piVar3 = (int *)0x0;
      uStack_18 = 0x3fd00000;
      break;
    case 2:
      piVar3 = (int *)0x0;
      uStack_18 = 0x3fe80000;
      break;
    case 3:
      piVar3 = (int *)0xcccccccd;
      uStack_18 = 0x3feccccc;
      break;
    default:
      piVar3 = (int *)0x0;
      uStack_18 = 0x3ff00000;
    }
    (**(code **)(*piVar2 + 0x10))(piVar2,piVar3,uStack_18);
    (**(code **)(*piVar3 + 8))(piVar3);
  }
  return;
}


