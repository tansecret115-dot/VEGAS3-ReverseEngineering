/* Module: vegas30k.dll
   Function: DtGetMultiByteFromWideChar
   Address: 01017240
   Source: Ghidra pseudocode (Stage 10 batch) */


/* int __stdcall DtGetMultiByteFromWideChar(char *,unsigned long,unsigned short *) */

int DtGetMultiByteFromWideChar(char *param_1,ulong param_2,ushort *param_3)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  uint uVar4;
  CHAR *pCVar5;
  CHAR local_104 [259];
  undefined1 local_1;
  
                    /* 0x17240  54  ?DtGetMultiByteFromWideChar@@YGHPADKPAG@Z */
  if ((param_3 == (ushort *)0x0) || (*param_3 != 0)) {
    iVar1 = WideCharToMultiByte(0,0,(LPCWSTR)param_3,-1,local_104,0x104,(LPCSTR)0x0,(LPBOOL)0x0);
  }
  else if (&stack0x00000000 == &DAT_00000104) {
    iVar1 = 0;
  }
  else {
    local_104[0] = '\0';
    iVar1 = 1;
  }
  local_1 = 0;
  if (iVar1 < 1) {
    uVar2 = 0;
  }
  else {
    uVar2 = iVar1 - 1;
    uVar3 = param_2;
    if (param_2 < uVar2) goto LAB_010172a1;
  }
  uVar3 = uVar2;
LAB_010172a1:
  pCVar5 = local_104;
  for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined4 *)param_1 = *(undefined4 *)pCVar5;
    pCVar5 = pCVar5 + 4;
    param_1 = param_1 + 4;
  }
  for (uVar4 = uVar3 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *param_1 = *pCVar5;
    pCVar5 = pCVar5 + 1;
    param_1 = param_1 + 1;
  }
  if (param_2 < uVar2) {
    uVar2 = param_2;
  }
  return uVar2;
}


