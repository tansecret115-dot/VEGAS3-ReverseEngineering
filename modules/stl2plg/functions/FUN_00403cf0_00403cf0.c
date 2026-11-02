/* Module: stl2plg.dll
   Function: FUN_00403cf0
   Address: 00403cf0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00403cf0(HANDLE param_1,uint *param_2)

{
  uint uVar1;
  HANDLE hFile;
  uint *puVar2;
  uint uVar3;
  BOOL BVar4;
  
  hFile = param_1;
  uVar3 = FUN_004050b0(param_1);
  puVar2 = param_2;
  if ((uVar3 != 0) &&
     (BVar4 = ReadFile(hFile,param_2,0x14,(LPDWORD)&param_1,(LPOVERLAPPED)0x0), BVar4 == 0)) {
    return;
  }
  uVar3 = *puVar2;
  uVar1 = puVar2[1];
  *puVar2 = (uVar3 << 0x10 | uVar3 & 0xff00) << 8 | uVar3 >> 0x18 | (uVar3 >> 0x10 & 0xff) << 8;
  uVar3 = puVar2[2];
  puVar2[1] = (uVar1 << 0x10 | uVar1 & 0xff00) << 8 | uVar1 >> 0x18 | (uVar1 >> 0x10 & 0xff) << 8;
  uVar1 = puVar2[3];
  puVar2[2] = (uVar3 << 0x10 | uVar3 & 0xff00) << 8 | uVar3 >> 0x18 | (uVar3 >> 0x10 & 0xff) << 8;
  puVar2[3] = (uVar1 << 0x10 | uVar1 & 0xff00) << 8 | uVar1 >> 0x18 | (uVar1 >> 0x10 & 0xff) << 8;
  return;
}


