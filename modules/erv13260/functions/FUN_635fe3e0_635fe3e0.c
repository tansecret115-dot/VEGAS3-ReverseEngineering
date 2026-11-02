/* Module: erv13260.dll
   Function: FUN_635fe3e0
   Address: 635fe3e0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_635fe3e0(byte *param_1,byte *param_2,int param_3)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  
  bVar4 = 0;
  if (param_3 == 0) {
    *param_1 = *param_1;
    return;
  }
  do {
    bVar1 = *param_1;
    bVar2 = *param_2;
    bVar3 = bVar1 + bVar4 + bVar2;
    *param_1 = bVar3;
    bVar4 = ((byte)(bVar1 + bVar4) < bVar4) + (bVar3 < bVar2);
    param_2 = param_2 + 1;
    param_1 = param_1 + 1;
    param_3 = param_3 + -1;
  } while (param_3 != 0);
  *param_1 = *param_1 + bVar4;
  return;
}


