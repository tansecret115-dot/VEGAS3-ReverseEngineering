/* Module: vegas30k.dll
   Function: DtGetWideCharFromMultiByte
   Address: 010172d0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* int __stdcall DtGetWideCharFromMultiByte(unsigned short *,unsigned long,char *) */

int DtGetWideCharFromMultiByte(ushort *param_1,ulong param_2,char *param_3)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  uint uVar4;
  WCHAR *pWVar5;
  WCHAR local_208 [259];
  undefined2 local_2;
  
                    /* 0x172d0  57  ?DtGetWideCharFromMultiByte@@YGHPAGKPAD@Z */
  iVar1 = MultiByteToWideChar(0,1,param_3,-1,local_208,0x104);
  local_2 = 0;
  if (iVar1 < 1) {
    uVar2 = 0;
  }
  else {
    uVar2 = iVar1 - 1;
    uVar3 = param_2;
    if (param_2 < uVar2) goto LAB_01017312;
  }
  uVar3 = uVar2;
LAB_01017312:
  pWVar5 = local_208;
  for (uVar4 = (uVar3 & 0x7fffffff) >> 1; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined4 *)param_1 = *(undefined4 *)pWVar5;
    pWVar5 = (WCHAR *)((int)pWVar5 + 4);
    param_1 = param_1 + 2;
  }
  for (uVar4 = uVar3 * 2 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined1 *)param_1 = *(undefined1 *)pWVar5;
    pWVar5 = (WCHAR *)((int)pWVar5 + 1);
    param_1 = (ushort *)((int)param_1 + 1);
  }
  if (param_2 < uVar2) {
    uVar2 = param_2;
  }
  return uVar2;
}


