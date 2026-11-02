/* Module: sfmarket2.dll
   Function: FUN_0045b080
   Address: 0045b080
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0045b080(int *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  char *_Src;
  int iVar4;
  int local_4;
  
  piVar1 = param_1;
  param_1[1] = 0;
  local_4 = FUN_00485150();
  puVar2 = (undefined4 *)FUN_004850c0(piVar1,0x50);
  if (puVar2 == (undefined4 *)0x0) {
    FUN_00485160();
    *(undefined4 *)(*piVar1 + 0x14) = 0x35;
    *(undefined4 *)(*piVar1 + 0x18) = 0;
    (**(code **)*piVar1)(piVar1);
  }
  *puVar2 = FUN_0045b1a0;
  puVar2[1] = FUN_0045b2f0;
  puVar2[2] = FUN_0045b390;
  puVar2[3] = FUN_0045b440;
  puVar2[4] = FUN_0045b4f0;
  puVar2[5] = FUN_0045b560;
  puVar2[6] = &LAB_0045b5d0;
  puVar2[7] = &LAB_0045b740;
  puVar2[8] = &LAB_0045b900;
  puVar2[9] = FUN_0045bad0;
  puVar2[10] = &LAB_0045bbc0;
  puVar2[0xb] = local_4;
  puVar3 = puVar2 + 0xf;
  iVar4 = 2;
  do {
    puVar3[-2] = 0;
    *puVar3 = 0;
    puVar3 = puVar3 + -1;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  puVar2[0x10] = 0;
  puVar2[0x11] = 0;
  puVar2[0x12] = 0x50;
  piVar1[1] = (int)puVar2;
  _Src = getenv("JPEGMEM");
  if (_Src != (char *)0x0) {
    param_1 = (int *)CONCAT31(param_1._1_3_,0x78);
    iVar4 = sscanf(_Src,"%ld%c",&local_4,&param_1);
    if (0 < iVar4) {
      if (((char)param_1 == 'm') || ((char)param_1 == 'M')) {
        local_4 = local_4 * 1000;
      }
      puVar2[0xb] = local_4 * 1000;
    }
  }
  return;
}


