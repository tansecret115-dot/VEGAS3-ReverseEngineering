/* Module: sftrans1.dll
   Function: FUN_005463f0
   Address: 005463f0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_005463f0(int *param_1,uchar *param_2)

{
  uchar *puVar1;
  
  puVar1 = _mbspbrk((uchar *)*param_1,param_2);
  if (puVar1 == (uchar *)0x0) {
    return -1;
  }
  return (int)puVar1 - *param_1;
}


