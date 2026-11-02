/* Module: vegas30.exe
   Function: FUN_00440ea0
   Address: 00440ea0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00440ea0(uchar *param_1)

{
  uchar *_Dest;
  uchar local_104 [260];
  
  GetModuleFileNameA((HMODULE)0x0,(LPSTR)local_104,0x104);
  _Dest = (uchar *)_SfGetFileNamePtrA_4(local_104);
  _mbscpy(_Dest,(uchar *)"daotemp.dat");
  _mbscpy(param_1,local_104);
  return;
}


