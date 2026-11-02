/* Module: erv13260.dll
   Function: FUN_635f7db0
   Address: 635f7db0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __cdecl FUN_635f7db0(uint param_1)

{
  undefined4 *puVar1;
  void *pvVar2;
  
  puVar1 = malloc(0xc);
  if (puVar1 == (undefined4 *)0x0) {
    fprintf((FILE *)(_iob_exref + 0x20),s_Couldn_t_allocate__PictImage____63606604);
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  pvVar2 = malloc(param_1);
  *puVar1 = pvVar2;
  if (pvVar2 == (void *)0x0) {
    fprintf((FILE *)(_iob_exref + 0x20),s_Couldn_t_allocate_memory_for_lum_636065dc);
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  pvVar2 = malloc(param_1 >> 2);
  puVar1[1] = pvVar2;
  if (pvVar2 == (void *)0x0) {
    fprintf((FILE *)(_iob_exref + 0x20),s_Couldn_t_allocate_memory_for_Cr_636065b8);
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  pvVar2 = malloc(param_1 >> 2);
  puVar1[2] = pvVar2;
  if (pvVar2 == (void *)0x0) {
    fprintf((FILE *)(_iob_exref + 0x20),s_Couldn_t_allocate_memory_for_Cb_63606594);
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  return puVar1;
}


