/* Module: rmme3260.dll
   Function: FUN_6624bf30
   Address: 6624bf30
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl FUN_6624bf30(byte *param_1)

{
  int *piVar1;
  int iVar2;
  
  if ((*param_1 & 1) == 0) {
    return -0x7fffbffb;
  }
  (**(code **)(**(int **)(param_1 + 0x86c) + 0x50))
            (*(int **)(param_1 + 0x86c),*(undefined4 *)(param_1 + 4),8);
  piVar1 = *(int **)(param_1 + 0xb68);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    param_1[0xb68] = 0;
    param_1[0xb69] = 0;
    param_1[0xb6a] = 0;
    param_1[0xb6b] = 0;
  }
  (**(code **)(**(int **)(param_1 + 0x86c) + 0x4c))(*(int **)(param_1 + 0x86c));
  iVar2 = FUN_6624c040((int *)param_1);
  return iVar2;
}


