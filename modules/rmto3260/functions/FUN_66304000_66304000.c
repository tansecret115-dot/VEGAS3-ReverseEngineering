/* Module: rmto3260.dll
   Function: FUN_66304000
   Address: 66304000
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_66304000(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  for (puVar1 = *(undefined4 **)(param_1 + 0x14); puVar1 != (undefined4 *)0x0;
      puVar1 = (undefined4 *)puVar1[2]) {
    iVar2 = (**(code **)(*(int *)*puVar1 + 0x18))((int *)*puVar1);
    iVar3 = iVar3 + iVar2;
  }
  return iVar3;
}


