/* Module: encn3260.dll
   Function: FUN_664b14a0
   Address: 664b14a0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_664b14a0(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 local_38 [13];
  
  if (*(undefined4 **)((int)param_1 + 0x42) != (undefined4 *)0x0) {
    puVar2 = *(undefined4 **)((int)param_1 + 0x42);
    puVar3 = local_38;
    for (iVar1 = 0xd; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
    *(undefined4 *)((int)param_1 + 0x49a) = 0;
    *(undefined4 *)((int)param_1 + 0x49e) = 0;
    (**(code **)(*param_1 + 0x10))(param_1,local_38);
  }
  return;
}


