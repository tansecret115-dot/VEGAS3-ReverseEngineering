/* Module: rmme3260.dll
   Function: FUN_6624a2b0
   Address: 6624a2b0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl FUN_6624a2b0(int param_1,int *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = -0x7fffbffb;
  if ((param_2 != (int *)0x0) && (param_1 != 0)) {
    if (DAT_6627dd1c != 0) {
      puVar1 = (undefined4 *)(param_1 + 0xb78);
      iVar2 = (**(code **)(**(int **)(param_1 + 0x86c) + 0x14))
                        (*(int **)(param_1 + 0x86c),4,&DAT_6627d0f8,puVar1,0);
      if (iVar2 == 0) {
        iVar2 = (**(code **)(*param_2 + 0x7c))(param_2,*puVar1);
        if (iVar2 != 0) {
          (**(code **)(*(int *)*puVar1 + 8))((int *)*puVar1);
        }
      }
    }
    return iVar2;
  }
  return -0x7fffbffb;
}


