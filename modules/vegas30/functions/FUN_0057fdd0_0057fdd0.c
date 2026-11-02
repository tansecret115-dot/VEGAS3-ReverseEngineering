/* Module: vegas30.exe
   Function: FUN_0057fdd0
   Address: 0057fdd0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_0057fdd0(int *param_1,uchar *param_2)

{
  uchar *puVar1;
  
  puVar1 = _mbsstr((uchar *)*param_1,param_2);
  if (puVar1 == (uchar *)0x0) {
    return -1;
  }
  return (int)puVar1 - *param_1;
}


