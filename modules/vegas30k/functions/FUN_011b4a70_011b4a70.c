/* Module: vegas30k.dll
   Function: FUN_011b4a70
   Address: 011b4a70
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_011b4a70(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar3 = 0;
  uVar2 = 0xffffffff;
  (**(code **)(param_1 + 0x14))(param_1,6,*(undefined4 *)(param_1 + 0x18),0xffffffff,0,0,0,0,0,0,0);
  iVar1 = (**(code **)(**(int **)(param_1 + 0x10) + 0x38))(*(int **)(param_1 + 0x10),uVar2,uVar3);
  if (-1 < iVar1) {
    *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) & 0xffffffef | 0x20;
    (**(code **)(param_1 + 0x14))
              (param_1,7,*(undefined4 *)(param_1 + 0x18),0xffffffff,0,0,0,0,0,0,0);
  }
  return;
}


