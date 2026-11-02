/* Module: oggplug.dll
   Function: FUN_00440e30
   Address: 00440e30
   Source: Ghidra pseudocode (Stage 10 batch) */


uint __cdecl FUN_00440e30(int *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = *param_1;
  lVar2 = __allshl(8,0);
  lVar2 = __allshl(8,(int)((ulonglong)lVar2 >> 0x20));
  lVar2 = __allshl(8,(int)((ulonglong)lVar2 >> 0x20));
  lVar2 = __allshl(8,(int)((ulonglong)lVar2 >> 0x20));
  lVar2 = __allshl(8,(int)((ulonglong)lVar2 >> 0x20));
  lVar2 = __allshl(8,(int)((ulonglong)lVar2 >> 0x20));
  lVar2 = __allshl(8,(int)((ulonglong)lVar2 >> 0x20));
  return (uint)lVar2 | (uint)*(byte *)(iVar1 + 6);
}


