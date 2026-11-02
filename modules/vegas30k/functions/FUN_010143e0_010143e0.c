/* Module: vegas30k.dll
   Function: FUN_010143e0
   Address: 010143e0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_010143e0(int *param_1,uchar *param_2)

{
  uchar *_Source;
  undefined4 uVar1;
  int iVar2;
  char *pcVar3;
  char local_40 [64];
  
  iVar2 = *param_1;
  if (iVar2 == 0) {
    cdr_FormatLBA(local_40,param_1[2],0);
    pcVar3 = local_40;
    uVar1 = _SfGetString2_8(DAT_0120e5c8,0x111a);
    SfPrintF(param_2,uVar1,pcVar3);
    return;
  }
  if (iVar2 == 3) {
    iVar2 = param_1[1];
    uVar1 = 0x1118;
  }
  else {
    if (iVar2 != 4) {
      _Source = (uchar *)_SfGetString2_8(DAT_0120e5c8,0x111b);
      _mbscpy(param_2,_Source);
      return;
    }
    iVar2 = param_1[1];
    uVar1 = 0x1119;
  }
  uVar1 = _SfGetString2_8(DAT_0120e5c8,uVar1);
  SfPrintF(param_2,uVar1,iVar2);
  return;
}


