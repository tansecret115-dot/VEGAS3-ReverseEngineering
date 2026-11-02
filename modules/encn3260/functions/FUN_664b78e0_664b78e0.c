/* Module: encn3260.dll
   Function: FUN_664b78e0
   Address: 664b78e0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl FUN_664b78e0(int param_1)

{
  undefined4 *puVar1;
  UINT UVar2;
  int iVar3;
  
  if ((DAT_664f1d4c == 0) && (UVar2 = FUN_664b7870(), UVar2 == 0)) {
    return -0x7fffbffb;
  }
  puVar1 = (undefined4 *)(param_1 + 0x8bc);
  iVar3 = (**(code **)(**(int **)(param_1 + 0x8ac) + 0x14))
                    (*(int **)(param_1 + 0x8ac),4,&DAT_664f1530,puVar1,0);
  if ((iVar3 == 0) &&
     (iVar3 = (**(code **)(**(int **)(param_1 + 0x8b0) + 0x7c))(*(int **)(param_1 + 0x8b0),*puVar1),
     iVar3 != 0)) {
    (**(code **)(*(int *)*puVar1 + 8))((int *)*puVar1);
  }
  return iVar3;
}


