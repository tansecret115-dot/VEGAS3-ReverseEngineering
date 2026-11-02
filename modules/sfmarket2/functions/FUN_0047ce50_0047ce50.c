/* Module: sfmarket2.dll
   Function: FUN_0047ce50
   Address: 0047ce50
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0047ce50(int *param_1,undefined1 param_2)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  
  piVar1 = *(int **)((int)param_1 + 0x51);
  *(undefined1 *)*piVar1 = param_2;
  iVar2 = piVar1[1];
  *piVar1 = *piVar1 + 1;
  piVar1[1] = iVar2 + -1;
  if (iVar2 + -1 == 0) {
    cVar3 = (*(code *)piVar1[3])(param_1);
    if (cVar3 == '\0') {
      *(undefined4 *)(*param_1 + 0x14) = 0x16;
      (**(code **)*param_1)(param_1);
    }
  }
  return;
}


