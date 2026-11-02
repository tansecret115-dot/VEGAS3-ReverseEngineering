/* Module: vegas30.exe
   Function: FUN_00581100
   Address: 00581100
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_00581100(int *param_1,uchar *param_2)

{
  uchar *puVar1;
  
  puVar1 = _mbspbrk((uchar *)*param_1,param_2);
  if (puVar1 == (uchar *)0x0) {
    return -1;
  }
  return (int)puVar1 - *param_1;
}


