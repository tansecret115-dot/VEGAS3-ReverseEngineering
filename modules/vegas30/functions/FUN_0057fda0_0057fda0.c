/* Module: vegas30.exe
   Function: FUN_0057fda0
   Address: 0057fda0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_0057fda0(int *param_1,uint param_2)

{
  uchar *puVar1;
  
  puVar1 = _mbsrchr((uchar *)*param_1,param_2 & 0xff);
  if (puVar1 == (uchar *)0x0) {
    return -1;
  }
  return (int)puVar1 - *param_1;
}


