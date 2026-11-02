/* Module: vegas30k.dll
   Function: cdrtrack_GetIndex
   Address: 0109a030
   Source: Ghidra pseudocode (Stage 10 batch) */


/* unsigned long * __stdcall cdrtrack_GetIndex(struct _track *,unsigned int) */

ulong * cdrtrack_GetIndex(_track *param_1,uint param_2)

{
                    /* 0x9a030  624  ?cdrtrack_GetIndex@@YGPAKPAU_track@@I@Z */
  return (ulong *)(*(int *)(param_1 + 0x44) + param_2 * 4);
}


