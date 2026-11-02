/* Module: Setup.exe
   Function: _SfGetUIColorAbsolute@4
   Address: 00414990
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined * _SfGetUIColorAbsolute_4(int param_1)

{
  undefined *puVar1;
  bool bVar2;
  
                    /* 0x14990  180  _SfGetUIColorAbsolute@4 */
  bVar2 = param_1 < 0;
  if (bVar2) {
    param_1 = -param_1;
  }
  if (param_1 < 100) {
    puVar1 = (undefined *)GetSysColor(param_1);
    return puVar1;
  }
  if (0x3a < param_1 - 100U) {
    return (undefined *)0xffffffff;
  }
  puVar1 = (&PTR_s_Stream__d__MIDI__One_Shot_00443cc0)[param_1];
  if (bVar2) {
    puVar1 = *(undefined **)("ExtractInternalZipCompression" + param_1 * 4 + 0x10);
  }
  if (((uint)puVar1 & 0xff000000) == 0x4000000) {
    puVar1 = (undefined *)GetSysColor((uint)puVar1 & 0xffffff);
    return puVar1;
  }
  if (((uint)puVar1 & 0xff000000) == 0x5000000) {
    puVar1 = (undefined *)FUN_004148c0((uint)puVar1 & 0xffffff);
  }
  return puVar1;
}


