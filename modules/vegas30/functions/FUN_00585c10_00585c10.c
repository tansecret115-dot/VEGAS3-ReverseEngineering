/* Module: vegas30.exe
   Function: FUN_00585c10
   Address: 00585c10
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_00585c10(int *param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  uint unaff_EBX;
  int unaff_retaddr;
  
  puVar1 = (undefined4 *)(**(code **)(*param_1 + 8))();
  if (puVar1 != (undefined4 *)0x0) {
    iVar2 = (**(code **)(*param_1 + 0xc))(puVar1);
    if (-1 < iVar2) {
      puVar3 = (undefined4 *)(**(code **)(*param_1 + 0x10))();
      if (puVar3 != (undefined4 *)0x0) {
        if ((param_4 & 0x80000000) == 0) {
          puVar3[1] = param_4;
        }
        else {
          puVar3[1] = *(undefined4 *)(unaff_retaddr + 0x1c);
        }
        iVar2 = (**(code **)(**(int **)(unaff_retaddr + 0x20) + 0x10))(puVar1,param_2,puVar3);
        if (-1 < iVar2) {
          if ((unaff_EBX & 1) == 0) {
            (**(code **)(*param_1 + 0x14))(puVar3);
          }
          (**(code **)(*param_1 + 0x18))(unaff_retaddr);
        }
        (**(code **)*puVar3)(1);
      }
    }
    (**(code **)*puVar1)(1);
    return param_3;
  }
  return 0x8007000e;
}


