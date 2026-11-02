/* Module: vegas30.exe
   Function: FUN_00427b60
   Address: 00427b60
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00427b60(void)

{
  int iVar1;
  HPALETTE hpal;
  tagPALETTEENTRY local_400 [256];
  
  if (((DAT_0064762c != 0) && (iVar1 = *(int *)(DAT_0064762c + 0x80), iVar1 != 0)) &&
     (*(int *)(iVar1 + 0x94) != 0)) {
    hpal = (HPALETTE)FUN_004019f0();
    GetPaletteEntries(hpal,0,0x100,local_400);
    (**(code **)(**(int **)(iVar1 + 0x94) + 0x78))(0,0x100,local_400);
  }
  return;
}


