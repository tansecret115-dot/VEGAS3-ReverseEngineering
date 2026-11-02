/* Module: vegas30k.dll
   Function: FUN_0118e860
   Address: 0118e860
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_0118e860(int param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = *(int **)(param_1 + 0x68);
  *param_2 = (int)piVar1;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))(piVar1);
  }
  iVar2 = *(int *)(param_1 + 0x6c);
  param_2[0x48] = iVar2;
  param_2[0x42] = iVar2;
  _SFSMPTE_NanoToSMPTE_12
            (*(undefined4 *)(param_1 + 0x70),*(undefined4 *)(param_1 + 0x74),param_2 + 0x42);
  param_2[0x49] = *(int *)(param_1 + 0x78);
  param_2[0x4a] = *(int *)(param_1 + 0x7c);
  param_2[0x4e] = *(int *)(param_1 + 0x80);
  param_2[0x4f] = *(int *)(param_1 + 0x84);
  param_2[0x4d] = *(int *)(param_1 + 0x88);
  return 0;
}


