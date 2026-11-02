/* Module: mp3plug.dll
   Function: FUN_5f6e9b00
   Address: 5f6e9b00
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5f6e9b00(void)

{
  float fVar1;
  int iVar2;
  double dVar3;
  
  fVar1 = DAT_5f75d7e8;
  iVar2 = 0;
  do {
    dVar3 = pow((double)iVar2,(double)fVar1);
    iVar2 = iVar2 + 1;
    (&DAT_5f7529d0)[iVar2] = (float)dVar3;
  } while (iVar2 < 0x2000);
  return;
}


