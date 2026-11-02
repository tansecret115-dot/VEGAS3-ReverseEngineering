/* Module: vidcap30.exe
   Function: FUN_00421220
   Address: 00421220
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00421220(int *param_1,HANDLE param_2)

{
  undefined1 local_18 [4];
  int local_14;
  int local_10;
  
  if (*param_1 == 2) {
    if (param_2 != (HANDLE)0x0) {
      param_1[3] = param_1[3] | 0xe;
      if ((HGDIOBJ)param_1[0x25b] != (HGDIOBJ)0x0) {
        DeleteObject((HGDIOBJ)param_1[0x25b]);
        param_1[0x25b] = 0;
      }
      param_1[0x25b] = (int)param_2;
      GetObjectA(param_2,0x18,local_18);
      param_1[0xdc] = local_14;
      param_1[0xdd] = local_10;
      return 0;
    }
    param_1[3] = param_1[3] & 0xfffffff1;
    if ((HGDIOBJ)param_1[0x25b] != (HGDIOBJ)0x0) {
      DeleteObject((HGDIOBJ)param_1[0x25b]);
      param_1[0x25b] = 0;
    }
    param_1[0xdc] = 0;
    param_1[0xdd] = 0;
  }
  return 0;
}


