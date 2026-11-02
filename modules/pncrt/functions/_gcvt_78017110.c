/* Module: pncrt.dll
   Function: _gcvt
   Address: 78017110
   Source: Ghidra pseudocode (Stage 10 batch) */


char * __cdecl _gcvt(double _Val,int _NumOfDigits,char *_DstBuf)

{
  int iVar1;
  char cVar2;
  int *piVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  int local_28 [4];
  char local_18 [24];
  
                    /* 0x17110  254  _gcvt */
  piVar3 = FUN_7802fa20(_Val._0_4_,_Val._4_4_,local_28,local_18);
  iVar1 = piVar3[1] + -1;
  if ((iVar1 < -1) || (_NumOfDigits + -1 < iVar1)) {
    pcVar4 = FUN_7802fcc0((undefined4 *)&_Val,_DstBuf,_NumOfDigits + -1,0);
  }
  else {
    pcVar4 = FUN_7802fe40((undefined4 *)&_Val,_DstBuf,_NumOfDigits - piVar3[1]);
  }
  cVar2 = *pcVar4;
  pcVar5 = pcVar4;
  while ((cVar2 != '\0' && (cVar2 != DAT_7803f558))) {
    pcVar6 = pcVar5 + 1;
    pcVar5 = pcVar5 + 1;
    cVar2 = *pcVar6;
  }
  pcVar6 = pcVar5 + 1;
  if (*pcVar5 != '\0') {
    cVar2 = *pcVar6;
    while ((cVar2 != '\0' && (cVar2 != 'e'))) {
      pcVar5 = pcVar6 + 1;
      pcVar6 = pcVar6 + 1;
      cVar2 = *pcVar5;
    }
    cVar2 = pcVar6[-1];
    pcVar5 = pcVar6;
    while (cVar2 == '0') {
      cVar2 = pcVar5[-2];
      pcVar5 = pcVar5 + -1;
    }
    cVar2 = *pcVar6;
    *pcVar5 = cVar2;
    while (cVar2 != '\0') {
      pcVar6 = pcVar6 + 1;
      cVar2 = *pcVar6;
      pcVar5 = pcVar5 + 1;
      *pcVar5 = cVar2;
    }
  }
  return pcVar4;
}


