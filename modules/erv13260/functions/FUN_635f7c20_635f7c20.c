/* Module: erv13260.dll
   Function: FUN_635f7c20
   Address: 635f7c20
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_635f7c20(undefined4 *param_1,int param_2)

{
  int *piVar1;
  FILE *_File;
  int iVar2;
  size_t sVar3;
  int local_8;
  
  iVar2 = param_2;
  local_8 = *(int *)(param_2 + 0x23cf);
  piVar1 = (int *)(param_2 + 0x23cb);
  _File = *(FILE **)(param_2 + 0x23bb);
  param_2 = *piVar1;
  if (DAT_636064f0 != 0) {
    DAT_636064f0 = 0;
    sVar3 = fwrite(&param_2,4,1,_File);
    if (sVar3 != 1) {
      fprintf((FILE *)(_iob_exref + 0x20),&DAT_636062dc,s_Error_in_writing_to_raw_file_63606574);
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    sVar3 = fwrite(&local_8,4,1,_File);
    if (sVar3 != 1) {
      fprintf((FILE *)(_iob_exref + 0x20),&DAT_636062dc,s_Error_in_writing_to_raw_file_63606554);
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
  }
  sVar3 = fwrite((void *)*param_1,1,*(size_t *)(iVar2 + 0xc),_File);
  if (sVar3 != param_2 * local_8) {
    fprintf((FILE *)(_iob_exref + 0x20),&DAT_636062dc,s_Error_in_writing_to_raw_file_63606534);
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  sVar3 = fwrite((void *)param_1[2],1,*(uint *)(iVar2 + 0xc) >> 2,_File);
  if (sVar3 != *(uint *)(iVar2 + 0xc) >> 2) {
    fprintf((FILE *)(_iob_exref + 0x20),&DAT_636062dc,s_Error_in_writing_to_raw_file__63606514);
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  sVar3 = fwrite((void *)param_1[1],1,*(uint *)(iVar2 + 0xc) >> 2,_File);
  if (sVar3 != *(uint *)(iVar2 + 0xc) >> 2) {
    fprintf((FILE *)(_iob_exref + 0x20),&DAT_636062dc,s_Error_in_writing_to_raw_file_636064f4);
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  return;
}


