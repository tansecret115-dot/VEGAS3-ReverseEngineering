/* Module: rmme3260.dll
   Function: FUN_6624bbb0
   Address: 6624bbb0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl
FUN_6624bbb0(undefined4 param_1,int *param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_68 [25];
  
  puVar2 = local_68;
  for (iVar1 = 0x19; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  local_68[0] = 100;
  local_68[2] = 0xcc0020;
  (**(code **)(*param_2 + 0x14))(param_2,param_4,param_3,param_5,0x1020000,local_68);
  return;
}


