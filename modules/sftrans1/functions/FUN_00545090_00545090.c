/* Module: sftrans1.dll
   Function: FUN_00545090
   Address: 00545090
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_00545090(int *param_1,uint param_2)

{
  uchar *puVar1;
  
  puVar1 = _mbsrchr((uchar *)*param_1,param_2 & 0xff);
  if (puVar1 == (uchar *)0x0) {
    return -1;
  }
  return (int)puVar1 - *param_1;
}


