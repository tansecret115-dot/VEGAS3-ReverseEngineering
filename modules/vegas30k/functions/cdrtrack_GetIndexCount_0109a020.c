/* Module: vegas30k.dll
   Function: cdrtrack_GetIndexCount
   Address: 0109a020
   Source: Ghidra pseudocode (Stage 10 batch) */


/* int __stdcall cdrtrack_GetIndexCount(struct _track *) */

int cdrtrack_GetIndexCount(_track *param_1)

{
                    /* 0x9a020  625  ?cdrtrack_GetIndexCount@@YGHPAU_track@@@Z */
  return *(int *)(param_1 + 0x40);
}


