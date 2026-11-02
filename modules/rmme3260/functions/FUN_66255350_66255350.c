/* Module: rmme3260.dll
   Function: FUN_66255350
   Address: 66255350
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl
FUN_66255350(uint param_1,uint param_2,uint param_3,int param_4,int param_5,int param_6)

{
  int iVar1;
  
  *(char *)(param_6 + param_5) = s_ABCDEFGHIJKLMNOPQRSTUVWXYZabcdef_6627c228[(int)param_1 >> 2];
  iVar1 = param_6 + 2;
  *(char *)(param_6 + 1 + param_5) =
       s_ABCDEFGHIJKLMNOPQRSTUVWXYZabcdef_6627c228[(int)param_2 >> 4 & 0xfU | (param_1 & 3) << 4];
  if (param_4 == 2) {
    *(undefined1 *)(iVar1 + param_5) = 0x3d;
    *(undefined1 *)(param_6 + 3 + param_5) = 0x3d;
    return;
  }
  if (param_4 != 0) {
    *(char *)(iVar1 + param_5) =
         s_ABCDEFGHIJKLMNOPQRSTUVWXYZabcdef_6627c228[(int)param_3 >> 6 & 3U | (param_2 & 0xf) << 2];
    *(undefined1 *)(param_6 + 3 + param_5) = 0x3d;
    return;
  }
  *(char *)(iVar1 + param_5) =
       s_ABCDEFGHIJKLMNOPQRSTUVWXYZabcdef_6627c228[(int)param_3 >> 6 & 3U | (param_2 & 0xf) << 2];
  *(char *)(param_6 + 3 + param_5) = s_ABCDEFGHIJKLMNOPQRSTUVWXYZabcdef_6627c228[param_3 & 0x3f];
  return;
}


