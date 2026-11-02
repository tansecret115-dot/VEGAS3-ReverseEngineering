/* Module: vegas30.exe
   Function: FUN_0043e400
   Address: 0043e400
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0043e400(undefined4 param_1,uchar *param_2)

{
  uchar *_Source;
  undefined1 *puVar1;
  
  _Source = (uchar *)_SfGetFileNamePtrA_4(param_1);
  _mbscpy(param_2,_Source);
  puVar1 = (undefined1 *)_SfGetFileNameExtensionPtrA_4(param_2);
  if (puVar1 != (undefined1 *)0x0) {
    *puVar1 = 0;
  }
  return;
}


