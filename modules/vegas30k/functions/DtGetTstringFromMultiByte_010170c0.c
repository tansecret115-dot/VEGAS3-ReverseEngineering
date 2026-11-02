/* Module: vegas30k.dll
   Function: DtGetTstringFromMultiByte
   Address: 010170c0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* int __stdcall DtGetTstringFromMultiByte(char *,unsigned long,char *) */

int DtGetTstringFromMultiByte(char *param_1,ulong param_2,char *param_3)

{
  uint uVar1;
  ulong uVar2;
  uint uVar3;
  uchar *puVar4;
  uchar local_104 [260];
  
                    /* 0x170c0  55  ?DtGetTstringFromMultiByte@@YGHPADK0@Z */
  _mbscpy(local_104,(uchar *)param_3);
  uVar1 = lstrlenA((LPCSTR)local_104);
  uVar2 = param_2;
  if (uVar1 <= param_2) {
    uVar2 = uVar1;
  }
  puVar4 = local_104;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)param_1 = *(undefined4 *)puVar4;
    puVar4 = puVar4 + 4;
    param_1 = param_1 + 4;
  }
  for (uVar3 = uVar2 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *param_1 = *puVar4;
    puVar4 = puVar4 + 1;
    param_1 = param_1 + 1;
  }
  if (param_2 < uVar1) {
    uVar1 = param_2;
  }
  return uVar1;
}


