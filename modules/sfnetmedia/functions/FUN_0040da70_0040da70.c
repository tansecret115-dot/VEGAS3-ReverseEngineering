/* Module: sfnetmedia.dll
   Function: FUN_0040da70
   Address: 0040da70
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0040da70(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  *(undefined4 *)(param_3 + 0x18) = 0x32;
  iVar1 = GetSystemMetrics(0x21);
  iVar2 = GetSystemMetrics(0x32);
  *(int *)(param_3 + 0x1c) = iVar2 + iVar1 * 2;
  return 0;
}


