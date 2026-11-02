/* Module: stl2plg.dll
   Function: FUN_0044e8c0
   Address: 0044e8c0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0044e8c0(int *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  char *_Src;
  int iVar4;
  int local_4;
  
  piVar1 = param_1;
  param_1[1] = 0;
  local_4 = FUN_00455c90();
  puVar2 = (undefined4 *)FUN_00455c00(piVar1,0x50);
  if (puVar2 == (undefined4 *)0x0) {
    FUN_00455ca0();
    *(undefined4 *)(*piVar1 + 0x14) = 0x35;
    *(undefined4 *)(*piVar1 + 0x18) = 0;
    (**(code **)*piVar1)(piVar1);
  }
  *puVar2 = FUN_0044e9e0;
  puVar2[1] = FUN_0044eb30;
  puVar2[2] = FUN_0044ebd0;
  puVar2[3] = FUN_0044ec80;
  puVar2[4] = FUN_0044ed30;
  puVar2[5] = FUN_0044eda0;
  puVar2[6] = &LAB_0044ee10;
  puVar2[7] = &LAB_0044ef80;
  puVar2[8] = &LAB_0044f140;
  puVar2[9] = FUN_0044f310;
  puVar2[10] = &LAB_0044f400;
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


