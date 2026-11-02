/* Module: vegas30k.dll
   Function: FUN_01026c10
   Address: 01026c10
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined1 * FUN_01026c10(int param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  undefined1 *puVar4;
  
  if ((*(int *)(param_1 + 4) == 0) && (*(int *)(param_1 + 8) == 0)) {
    return &DAT_80070057;
  }
  iVar3 = FUN_01023b50();
  if (iVar3 != 0) {
    iVar3 = _SfCoCreateInstanceFromObjectMap_24(*(undefined4 *)(param_1 + 4),0);
    if (iVar3 == 0) goto LAB_01026c89;
  }
  puVar4 = (undefined1 *)
           CoCreateInstance(*(IID **)(param_1 + 4),(LPUNKNOWN)0x0,3,(IID *)&DAT_011f0e80,
                            (LPVOID *)(param_1 + 0x20));
  if ((int)puVar4 < 0) {
    *(LPVOID *)(param_1 + 0x20) = (LPVOID)0x0;
    return puVar4;
  }
LAB_01026c89:
  piVar1 = *(int **)(param_1 + 0x20);
  puVar4 = (undefined1 *)(**(code **)(*piVar1 + 0xc))();
  if (-1 < (int)puVar4) {
    puVar4 = (undefined1 *)(**(code **)(*piVar1 + 0x1c))(piVar1);
    if (-1 < (int)puVar4) {
      piVar2 = *(int **)(param_1 + 0x20);
      *(undefined4 *)(param_1 + 0x28) = 0x1c;
      (**(code **)(*piVar2 + 0x18))(piVar2,(undefined4 *)(param_1 + 0x28));
      puVar4 = (undefined1 *)
               (**(code **)(*piVar1 + 0x10))
                         (piVar1,*(undefined4 *)(param_1 + 0xc),&stack0xffffffd4,0);
    }
  }
  return puVar4;
}


