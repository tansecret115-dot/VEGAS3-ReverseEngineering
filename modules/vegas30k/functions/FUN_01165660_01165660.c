/* Module: vegas30k.dll
   Function: FUN_01165660
   Address: 01165660
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined1 * FUN_01165660(int param_1,undefined4 *param_2)

{
  HGLOBAL hMem;
  LPVOID pvVar1;
  int *piVar2;
  undefined1 *puVar3;
  
  if ((param_1 == 0) || (param_2 == (undefined4 *)0x0)) {
    return &DAT_80070057;
  }
  *param_2 = 0;
  hMem = GlobalAlloc(0x40,0x30);
  pvVar1 = GlobalLock(hMem);
  if ((pvVar1 != (LPVOID)0x0) && (piVar2 = (int *)FUN_01164350(), piVar2 != (int *)0x0)) {
    puVar3 = (undefined1 *)(**(code **)(*piVar2 + 0x40))(piVar2,param_1);
    if ((int)puVar3 < 0) {
      return puVar3;
    }
    *param_2 = piVar2;
    return puVar3;
  }
  return (undefined1 *)0x8007000e;
}


