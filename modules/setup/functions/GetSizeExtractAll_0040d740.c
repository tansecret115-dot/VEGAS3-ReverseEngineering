/* Module: Setup.exe
   Function: GetSizeExtractAll
   Address: 0040d740
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: long __stdcall CArchive2::GetSizeExtractAll(__int64 &) */

long CArchive2::GetSizeExtractAll(__int64 *param_1)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  undefined4 *in_stack_00000008;
  int local_360 [11];
  uint local_334;
  int local_330;
  
                    /* 0xd740  36  ?GetSizeExtractAll@CArchive2@@QAGJAA_J@Z */
  iVar2 = 0;
  if (((int)param_1[0x116] == 0) && (*(int *)((int)param_1 + 0x8b4) == 0)) {
    if (*(int *)((int)param_1 + 0x24) == 0) {
      FUN_00410c30(param_1,0xaaaaaaa1,(uchar *)"GetSizeExtractAll",(uchar *)0x0);
      return -0x7fffbffb;
    }
    piVar3 = local_360;
    for (iVar2 = 0xd8; iVar2 != 0; iVar2 = iVar2 + -1) {
      *piVar3 = 0;
      piVar3 = piVar3 + 1;
    }
    iVar2 = FUN_00411200(param_1,local_360);
    while (iVar2 == 0) {
      uVar1 = *(uint *)(param_1 + 0x116);
      *(uint *)(param_1 + 0x116) = uVar1 + local_334;
      *(uint *)((int)param_1 + 0x8b4) =
           *(int *)((int)param_1 + 0x8b4) + local_330 + (uint)CARRY4(uVar1,local_334);
      iVar2 = FUN_004112c0(param_1,local_360);
    }
  }
  *in_stack_00000008 = (int)param_1[0x116];
  in_stack_00000008[1] = *(undefined4 *)((int)param_1 + 0x8b4);
  return (uint)(iVar2 < 0);
}


