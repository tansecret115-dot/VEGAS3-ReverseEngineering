/* Module: sfpagepeel.dll
   Function: FUN_00404270
   Address: 00404270
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00404270(int *param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  int *unaff_ESI;
  
  piVar2 = param_1;
  puVar1 = *(undefined4 **)param_1[2];
  param_1 = (int *)0x0;
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(puVar1,&DAT_0046faf0,&param_1);
  }
  (**(code **)(*param_1 + 0x10))(param_1,piVar2 + 0x1a);
  piVar2[10] = 0;
  if (unaff_ESI != (int *)0x0) {
    (**(code **)(*unaff_ESI + 8))(unaff_ESI);
  }
  return 0;
}


